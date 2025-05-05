@interface MRUpdateContentItemMessage : MRProtocolMessage
@property (nonatomic) MRPlayerPath playerPath;
@property (nonatomic) NSArray contentItems;
- (id)contentItems;
- (unsigned long long)type;
- (id)playerPath;
- (id)initWithContentItems:forPlayerPath:;
@end
