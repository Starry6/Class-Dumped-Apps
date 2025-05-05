@interface CNMutableActivityAlert : CNActivityAlert
@property (nonatomic) NSString sound;
@property (nonatomic) NSString vibration;
@property (nonatomic) BOOL ignoreMute;
@property (nonatomic) NSDictionary userInfo;
- (id)freeze;
@end
