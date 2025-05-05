@interface IESStickerAnimation : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSArray values;
@property (nonatomic) NSArray frameTs;
@property (nonatomic) BOOL isAbsoluteFrameTs;
@property (nonatomic) Q repeatType;
- (id)frameTs;
- (BOOL)isAbsoluteFrameTs;
- (void)setFrameTs:;
- (void)setIsAbsoluteFrameTs:;
- (id)init;
- (id)values;
- (void)setType:;
- (unsigned long long)repeatType;
- (unsigned long long)type;
- (void).cxx_destruct;
- (void)setValues:;
- (id)copyWithZone:;
- (void)setRepeatType:;
@end
