@interface MPArtworkImageAttachments : NSObject
@property (nonatomic) UIColor textColor;
@property (nonatomic) BOOL hasTitle;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)textColor;
- (id)description;
- (BOOL)hasTitle;
- (id)copyWithZone:;
- (id)initWithTextColor:hasTitle:;
+ (BOOL)supportsSecureCoding;
@end
