@interface EARVoiceCommandActiveSet : NSObject
@property (nonatomic) NSSet suites;
@property (nonatomic) NSURL resourceBaseURL;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSuites:resourceBaseURL:;
- (id)plistJSONDictionary;
- (id)initWithPlistJSONDictionary:;
- (id)suites;
- (id)resourceBaseURL;
+ (BOOL)supportsSecureCoding;
@end
