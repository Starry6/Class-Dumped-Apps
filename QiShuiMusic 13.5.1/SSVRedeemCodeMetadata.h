@interface SSVRedeemCodeMetadata : NSObject
@property (nonatomic) BOOL allowsAutoSubmission;
@property (nonatomic) NSDictionary redeemCodeDictionary;
@property (nonatomic) NSString code;
@property (nonatomic) NSString codeType;
@property (nonatomic) NSString inputCode;
@property (nonatomic) NSArray items;
- (id)items;
- (id)code;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithRedeemCodeDictionary:;
- (id)codeType;
- (BOOL)allowsAutoSubmission;
- (id)inputCode;
- (void)setInputCode:;
- (id)redeemCodeDictionary;
@end
