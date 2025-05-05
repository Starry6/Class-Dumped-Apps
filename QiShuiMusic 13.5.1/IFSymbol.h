@interface IFSymbol : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) CUICatalog catalog;
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) NSURL bundleURL;
@property (nonatomic) NSString name;
- (id)bundleURL;
- (id)catalog;
- (id)initWithCoder:;
- (id)lock;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)imageForDescriptor:;
- (id)imageForSize:scale:;
- (id)name;
- (void)setLock:;
- (id)initWithSymbolName:bundleURL:;
- (id)imageForGraphicSymbolDescriptor:;
- (id)_lookupResolvedName:;
- (BOOL)_shouldFlipFromSymbolImage:desiredDirection:;
+ (BOOL)supportsSecureCoding;
+ (id)coreGlyphsCatalog;
+ (id)coreGlyphsPrivateCatalog;
@end
