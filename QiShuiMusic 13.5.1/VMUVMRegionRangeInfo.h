@interface VMUVMRegionRangeInfo : NSObject
@property (nonatomic) Q address;
@property (nonatomic) Q size;
@property (nonatomic) {_VMURange=QQ} range;
@property (nonatomic) Q stackIdentifier;
@property (nonatomic) I userTag;
- (id)init;
- (void)setAddress:;
- (id)range;
- (unsigned long long)address;
- (void)setSize:;
- (unsigned long long)size;
- (unsigned long long)stackIdentifier;
- (void)setStackIdentifier:;
- (unsigned int)userTag;
- (void)setUserTag:;
@end
