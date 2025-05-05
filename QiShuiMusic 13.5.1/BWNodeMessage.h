@interface BWNodeMessage : NSObject
@property (nonatomic) NSInteger category;
@property (nonatomic) NSInteger type;
- (int)type;
- (int)category;
@end
