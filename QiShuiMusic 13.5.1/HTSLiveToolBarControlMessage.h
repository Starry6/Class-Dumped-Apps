@interface HTSLiveToolBarControlMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger eventType;
@property (nonatomic) NSInteger groupId;
@property (nonatomic) NSInteger componentType;
@property (nonatomic) NSInteger opType;
@property (nonatomic) NSString text;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q showType;
@property (nonatomic) NSMutableArray highPriorityExclusionListArray;
@property (nonatomic) Q highPriorityExclusionListArray_Count;
@property (nonatomic) NSMutableArray lowPriorityExclusionListArray;
@property (nonatomic) Q lowPriorityExclusionListArray_Count;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
