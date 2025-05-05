@interface AAUpdateNameRequest : AAAppleIDSettingsRequest
- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithGrandSlamAccount:accountStore:firstName:lastName:;
+ (Class)responseClass;
@end
