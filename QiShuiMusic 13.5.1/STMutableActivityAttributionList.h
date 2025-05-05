@interface STMutableActivityAttributionList : STActivityAttributionList
@property (nonatomic) STMutableListData listData;
@property (nonatomic) NSArray attributions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addAttribution:;
- (void)setAttributions:;
- (id)initWithListData:;
- (void)removeAttribution:;
- (id)listData;
- (BOOL)applyDiff:;
- (void)removeAllOccurrencesOfAttribution:;
- (id)copyWithZone:;
@end
