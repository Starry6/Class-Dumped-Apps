@interface GEOThirdPartyLink : NSObject
@property (nonatomic) NSString adamID;
@property (nonatomic) NSURL url;
- (id)url;
- (void).cxx_destruct;
- (id)adamID;
- (id)initWithAdamID:url:;
+ (id)thirdPartyLinkFromProto:;
@end
