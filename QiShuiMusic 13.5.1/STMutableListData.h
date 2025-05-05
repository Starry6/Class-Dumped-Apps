@interface STMutableListData : STListData
@property (nonatomic) NSArray objects;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addObject:;
- (void)setObjects:;
- (void)removeObject:;
- (BOOL)applyDiff:;
- (void)removeAllOccurrencesOfObject:;
- (id)copyWithZone:;
@end
