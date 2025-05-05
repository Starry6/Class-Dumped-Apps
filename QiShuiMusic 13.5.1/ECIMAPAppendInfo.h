@interface ECIMAPAppendInfo : NSObject
@property (nonatomic) I uidValidity;
@property (nonatomic) Q newMessageUID;
- (void)setNewMessageUID:;
- (unsigned int)uidValidity;
- (void)setUidValidity:;
- (unsigned long long)newMessageUID;
@end
