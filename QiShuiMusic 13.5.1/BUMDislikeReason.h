@interface BUMDislikeReason : BUInterfaceBaseObject
@property (nonatomic) BUMDislikeReason iteration;
@property (nonatomic) NSString ID;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray subReasons;
@property (nonatomic) BOOL isSelected;
- (id)initWithID:name:subReasons:;
- (id)init;
- (BOOL)isMemberOfClass:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (void)setIteration:;
- (id)iteration;
@end
