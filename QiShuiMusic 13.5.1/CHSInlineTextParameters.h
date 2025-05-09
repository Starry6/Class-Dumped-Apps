@interface CHSInlineTextParameters : NSObject
@property (nonatomic) CHSFontSpecification fontSpecification;
@property (nonatomic) BSColor foregroundColor;
@property (nonatomic) BOOL allowsNonSystemForegroundColors;
@property (nonatomic) Q horizontalAlignment;
@property (nonatomic) BOOL showsDateAlongsideText;
@property (nonatomic) NSString dateFormat;
@property (nonatomic) BOOL ignoresRTL;
@property (nonatomic) Q graphicAlignment;
@property (nonatomic) {CGSize=dd} graphicMaxSize;
@property (nonatomic) Q symbolScale;
@property (nonatomic) BOOL forceUppercase;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)symbolScale;
- (id)foregroundColor;
- (id)init;
- (void)setForegroundColor:;
- (void)setSymbolScale:;
- (id)initWithBSXPCCoder:;
- (unsigned long long)hash;
- (void)setDateFormat:;
- (id)dateFormat;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)ignoresRTL;
- (void)setHorizontalAlignment:;
- (void)setShowsDateAlongsideText:;
- (void)setFontSpecification:;
- (unsigned long long)horizontalAlignment;
- (id)_initWithInlineTextProperties:;
- (id)_effectiveDateFormat;
- (id)fontSpecification;
- (BOOL)allowsNonSystemForegroundColors;
- (void)setAllowsNonSystemForegroundColors:;
- (BOOL)showsDateAlongsideText;
- (void)setIgnoresRTL:;
- (unsigned long long)graphicAlignment;
- (void)setGraphicAlignment:;
- (id)graphicMaxSize;
- (void)setGraphicMaxSize:;
- (BOOL)forceUppercase;
- (void)setForceUppercase:;
+ (BOOL)supportsBSXPCSecureCoding;
@end
