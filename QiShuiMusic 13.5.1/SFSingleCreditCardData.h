@interface SFSingleCreditCardData : WBSSingleCreditCardData
@property (nonatomic) NSString headerText;
@property (nonatomic) NSString displayText;
- (id)headerText;
- (id)initWithCoder:;
- (id)displayText;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithHeaderText:displayText:type:value:;
+ (BOOL)supportsSecureCoding;
@end
