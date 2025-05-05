@interface CTVoicemailInfoType : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) BOOL available;
@property (nonatomic) NSNumber count;
@property (nonatomic) BOOL isNetworkOriginated;
@property (nonatomic) BOOL isVoiceMailMWI;
- (BOOL)available;
- (void)setCount:;
- (id)url;
- (id)init;
- (id)initWithCoder:;
- (void)setUrl:;
- (void)setAvailable:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithParam:available:count:isNetworkOriginated:isVoiceMailMWI:;
- (BOOL)isEqualToCTVoicemailInfoType:;
- (BOOL)isNetworkOriginated;
- (void)setIsNetworkOriginated:;
- (BOOL)isVoiceMailMWI;
- (void)setIsVoiceMailMWI:;
+ (BOOL)supportsSecureCoding;
@end
