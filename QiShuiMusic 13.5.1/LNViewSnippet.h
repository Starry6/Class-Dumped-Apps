@interface LNViewSnippet : NSObject
@property (nonatomic) NSData viewData;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithViewData:;
- (id)viewData;
+ (BOOL)supportsSecureCoding;
@end
