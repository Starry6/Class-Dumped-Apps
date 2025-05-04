@interface AWEUserWorkCellUniversalContainerComponent : AWERLComponent
@property (nonatomic) NSMutableDictionary componentDict;
@property (nonatomic) NSMutableArray ignoreSubComponentClassNames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildSubComponents;
- (id)componentDict;
- (void)setComponentDict:;
- (id)virtualNodeWithChildren:;
- (id)subComponentClassNames;
- (id)ignoreSubComponentClassNames;
- (void)setIgnoreSubComponentClassNames:;
- (void).cxx_destruct;
+ (id)componentWithData:context:;
@end
