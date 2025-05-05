@interface RACKVOChannelData : NSObject
@property (nonatomic) BOOL ignoreNextUpdate;
@property (nonatomic) ^v owner;
- (BOOL)ignoreNextUpdate;
- (void)setIgnoreNextUpdate:;
- (void)setOwner:;
- (id)owner;
+ (id)dataForChannel:;
@end
