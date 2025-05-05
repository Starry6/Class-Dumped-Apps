@interface MFBasicMessageDataSection : NSObject
@property (nonatomic) BOOL partial;
@property (nonatomic) BOOL complete;
@property (nonatomic) MFDataHolder dataHolder;
@property (nonatomic) NSString partName;
- (BOOL)isComplete;
- (void)setPartial:;
- (id)partName;
- (void)setPartName:;
- (void).cxx_destruct;
- (void)setData:;
- (void)setComplete:;
- (BOOL)isPartial;
- (id)dataHolder;
- (void)setDataHolder:;
@end
