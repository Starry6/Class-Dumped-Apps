@interface AWEIMLocoalPendingSendMessage : NSObject
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) BOOL insertIntoDB;
@property (nonatomic) @? completion;
- (BOOL)insertIntoDB;
- (void)setInsertIntoDB:;
- (id)completion;
- (void)setCompletion:;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
@end
