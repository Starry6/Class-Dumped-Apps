@interface IESIMMessageInertPlugin : NSObject
@property (nonatomic) <IESIMMessageInertPluginDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)processMessages:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
