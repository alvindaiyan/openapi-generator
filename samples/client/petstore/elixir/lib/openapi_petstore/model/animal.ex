# NOTE: This file is auto generated by OpenAPI Generator 6.5.0 (https://openapi-generator.tech).
# Do not edit this file manually.

defmodule OpenapiPetstore.Model.Animal do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :className,
    :color
  ]

  @type t :: %__MODULE__{
    :className => String.t,
    :color => String.t | nil
  }
end

defimpl Poison.Decoder, for: OpenapiPetstore.Model.Animal do
  def decode(value, _options) do
    value
  end
end

