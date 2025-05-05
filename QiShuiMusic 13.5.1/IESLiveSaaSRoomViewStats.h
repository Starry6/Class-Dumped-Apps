@interface IESLiveSaaSRoomViewStats : BDDynamicMTLModel
@property (nonatomic) BOOL isHidden;
@property (nonatomic) NSString displayShort;
@property (nonatomic) NSString displayMiddle;
@property (nonatomic) NSString displayLong;
@property (nonatomic) q displayValue;
@property (nonatomic) q displayVersion;
@property (nonatomic) BOOL incremental;
@property (nonatomic) q displayType;
@property (nonatomic) NSString displayShortAnchor;
@property (nonatomic) NSString displayMiddleAnchor;
@property (nonatomic) NSString displayLongAnchor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)JSONKeyPathsByPropertyKey;
@end
