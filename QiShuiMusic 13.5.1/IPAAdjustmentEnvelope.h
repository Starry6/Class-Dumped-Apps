@interface IPAAdjustmentEnvelope : NSObject
@property (nonatomic) IPAAdjustmentStack adjustmentStack;
@property (nonatomic) NSString originator;
@property (nonatomic) NSString format;
@property (nonatomic) NSString formatVersion;
- (void)setFormat:;
- (id)originator;
- (void)setOriginator:;
- (id)format;
- (id)formatVersion;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setFormatVersion:;
- (id)adjustmentStack;
- (id)videoAdjustmentStack;
- (id)photoAdjustmentStack;
- (BOOL)containsPhotoAdjustments;
- (BOOL)containsVideoAdjustments;
- (void)setAdjustmentStack:;
@end
