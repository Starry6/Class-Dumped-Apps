@interface IESEMessageForwardAdapter : NSObject
+ (BOOL)forwardMessage:toTarget:;
+ (BOOL)forwardMessage:toTarget:targetRoomID:;
@end
