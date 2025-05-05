@interface BDARVLiveRomModel : JSONModel
@property (nonatomic) NSString enterFromMerge;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString roomID;
- (void)setEnterMethod:;
- (id)enterFromMerge;
- (id)enterMethod;
- (void)setEnterFromMerge:;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
+ (id)keyMapper;
@end
