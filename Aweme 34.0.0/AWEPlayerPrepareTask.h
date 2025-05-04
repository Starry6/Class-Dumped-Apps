@interface AWEPlayerPrepareTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)preparePlayerIfNeeded;
+ (void)execute;
@end
