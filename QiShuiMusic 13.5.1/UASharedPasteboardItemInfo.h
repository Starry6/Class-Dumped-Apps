@interface UASharedPasteboardItemInfo : NSObject
@property (nonatomic) NSDictionary types;
- (id)types;
- (void)setTypes:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
