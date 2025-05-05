@interface WK_RTCMutableI420Buffer : WK_RTCI420Buffer
@property (nonatomic) NSInteger chromaWidth;
@property (nonatomic) NSInteger chromaHeight;
@property (nonatomic) r* dataY;
@property (nonatomic) r* dataU;
@property (nonatomic) r* dataV;
@property (nonatomic) NSInteger strideY;
@property (nonatomic) NSInteger strideU;
@property (nonatomic) NSInteger strideV;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) * mutableDataY;
@property (nonatomic) * mutableDataU;
@property (nonatomic) * mutableDataV;
- (char *)mutableDataY;
- (char *)mutableDataU;
- (char *)mutableDataV;
@end
