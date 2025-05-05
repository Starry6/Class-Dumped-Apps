@interface AVMutableDateRangeMetadataGroup : AVDateRangeMetadataGroup
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSArray items;
- (id)startDate;
- (void)setStartDate:;
- (id)items;
- (void)setEndDate:;
- (void)setItems:;
- (id)endDate;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)_initWithTaggedRangeMetadataDictionary:items:;
@end
