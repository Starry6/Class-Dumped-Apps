@interface ISSymbol : IFSymbol
+ (id)_generateVariantKeyFromOptions:;
+ (id)symbolForTypeIdentifier:error:;
+ (id)symbolForURL:;
+ (id)symbolForTypeIdentifier:withResolutionStrategy:variantOptions:error:;
+ (id)symbolForType:;
@end
