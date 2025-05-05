@interface PBTextReader : NSObject
- (id)init;
- (void)dealloc;
- (id)readMessageType:fromString:;
@end
