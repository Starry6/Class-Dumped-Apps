@interface IESLiveSaaSActivityMagicGestureModel : BDDynamicMTLModel
@property (nonatomic) Q status;
@property (nonatomic) Q actionType;
@property (nonatomic) NSString actionSchema;
@property (nonatomic) NSString effectId;
@property (nonatomic) double gesturePointX;
@property (nonatomic) double gesturePointY;
@property (nonatomic) double radius;
@property (nonatomic) q anchorID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:;
+ (id)JSONKeyPathsByPropertyKey;
@end
