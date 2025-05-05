@interface BUDislikeWords : BUInterfaceBaseObject
@property (nonatomic) NSString dislikeID;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) NSArray options;
- (id)dislikeID;
- (BOOL)isSelected;
- (id)options;
- (void).cxx_destruct;
- (id)name;
@end
