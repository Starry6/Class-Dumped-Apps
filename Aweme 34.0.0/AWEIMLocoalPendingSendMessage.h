@interface AWEIMLocoalPendingSendMessage : NSObject
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) BOOL insertIntoDB;
@property (nonatomic) @? completion;
- (BOOL)insertIntoDB;
- (void)setInsertIntoDB:;
- (id)message;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)setMessage:;
@end
