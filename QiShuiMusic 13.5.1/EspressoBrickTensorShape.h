@interface EspressoBrickTensorShape : NSObject
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger channels;
@property (nonatomic) NSInteger batch;
@property (nonatomic) NSInteger sequence;
@property (nonatomic) NSInteger rank;
- (int)channels;
- (int)batch;
- (void)setSequence:;
- (void)setWidth:;
- (int)rank;
- (int)height;
- (int)width;
- (void)setBatch:;
- (void)setHeight:;
- (void)setChannels:;
- (int)sequence;
- (void)setRank:;
@end
