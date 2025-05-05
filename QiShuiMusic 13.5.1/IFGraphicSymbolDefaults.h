@interface IFGraphicSymbolDefaults : NSObject
@property (nonatomic) NSString symbolName;
@property (nonatomic) q shape;
@property (nonatomic) q renderingMode;
@property (nonatomic) q symbolColor;
@property (nonatomic) q symbolColorAlternate;
@property (nonatomic) q enclosureColor;
@property (nonatomic) q enclosureColorAlternate;
@property (nonatomic) q fill;
@property (nonatomic) double enclosureSizeMultiplier;
- (id)symbolName;
- (long long)renderingMode;
- (long long)symbolColor;
- (id)init;
- (long long)shape;
- (void).cxx_destruct;
- (long long)enclosureColor;
- (long long)fill;
- (long long)symbolColorAlternate;
- (long long)enclosureColorAlternate;
- (double)enclosureSizeMultiplier;
+ (id)sharedInstance;
@end
