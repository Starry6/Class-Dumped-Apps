@interface PKLaunchRequest : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) <PKPersona> launchPersona;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)launchPersona;
- (id)uuid;
- (void)setUuid:;
- (void)setLaunchPersona:;
- (id)_initWithUUID:launchPersona:;
- (void).cxx_destruct;
+ (id)launchRequestWithUUID:launchPersona:;
@end
