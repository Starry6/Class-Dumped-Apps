@interface ECLocalActionReplayer : NSObject
@property (nonatomic) <ECLocalActionReplayerDelegate> delegate;
@property (nonatomic) ECLocalMessageAction action;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAction:;
- (id)init;
- (void)setError:;
- (void)setDelegate:;
- (id)action;
- (id)error;
- (void)setAction:;
- (id)delegate;
- (void).cxx_destruct;
- (id)replayAction;
- (id)failActionWithError:;
+ (id)log;
@end
