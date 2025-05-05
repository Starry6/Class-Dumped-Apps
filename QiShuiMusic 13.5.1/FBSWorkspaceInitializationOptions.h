@interface FBSWorkspaceInitializationOptions : NSObject
@property (nonatomic) BOOL _startsInactive;
@property (nonatomic) <FBSWorkspaceDelegate> delegate;
@property (nonatomic) FBSSerialQueue callOutQueue;
- (id)_initWithDelegate:;
- (id)init;
- (id)callOutQueue;
- (void)setCallOutQueue:;
- (id)delegate;
- (BOOL)_startsInactive;
- (void).cxx_destruct;
- (void)_setStartsInactive:;
+ (id)optionsWithDelegate:;
@end
