@interface CJPayChannelInfoModel : JSONModel
@property (nonatomic) NSString channelData;
@property (nonatomic) NSString payType;
- (id)payType;
- (void)setPayType:;
- (void).cxx_destruct;
- (id)channelData;
- (void)setChannelData:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
