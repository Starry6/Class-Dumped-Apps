@interface MFIMAPResponseConsumer : NSObject
- (void)dealloc;
- (void)done;
- (void)addConsumer:forSection:;
- (void)appendData:forSection:;
- (id)consumersBySection;
@end
