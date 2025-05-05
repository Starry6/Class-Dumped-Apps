@interface NEIKEv2Packet : NSObject
@property (nonatomic) BOOL isFragmented;
@property (nonatomic) I fragmentNumber;
@property (nonatomic) I totalFragments;
- (id)descriptionWithIndent:options:;
- (void).cxx_destruct;
- (id)description;
- (id)copyShortDescription;
- (void)gatherPayloads;
- (void)filloutPayloads;
- (BOOL)isFragmented;
- (unsigned int)fragmentNumber;
- (unsigned int)totalFragments;
+ (id)copyTypeDescription;
+ (BOOL)encryptPayloads;
+ (unsigned long long)exchangeType;
@end
