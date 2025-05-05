@interface BDUGLuckyDogUrlReplaceManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldReplaceWithTiming:type:;
- (id)tryReplaceUrl:timing:hasReplaced:;
- (id)tryReplaceUrlWithOriginalUrl:timing:;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
