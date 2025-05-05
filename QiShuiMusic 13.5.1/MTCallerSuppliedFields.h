@interface MTCallerSuppliedFields : NSObject
@property (nonatomic) NSArray eventData;
@property (nonatomic) NSDictionary cachedMergedFields;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)eventData;
- (void)setEventData:;
- (id)initWithEventData:;
- (id)initWithPageId:pageType:pageContext:eventData:;
- (id)valueForCallerSuppliedField:;
- (id)mergedFields;
- (id)cachedMergedFields;
- (void)setCachedMergedFields:;
@end
