@interface IESLiveSaaSUserPOI : BDDynamicMTLModel
@property (nonatomic) BOOL poiEnabled;
@property (nonatomic) NSString poiID;
@property (nonatomic) NSString poiName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapToPbModel;
+ (id)JSONKeyPathsByPropertyKey;
@end
