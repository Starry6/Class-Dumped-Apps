@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup
@property (nonatomic) NSDictionary sourceEntityScheduleTags;
@property (nonatomic) BOOL isAutoScheduleSupported;
@property (nonatomic) NSMutableDictionary destinationEntityScheduleTags;
- (void).cxx_destruct;
- (void)_setTagsForDestinationEntityAtURL:fromTaskResponseHeaders:completionBlock:;
- (id)initWithSourceURLs:destinationURL:overwrite:useFallback:sourceEntityDataPayloads:sourceEntityDataContentTypes:sourceEntityETags:sourceEntityScheduleTags:accountInfoProvider:taskManager:isAutoScheduleSupported:;
- (void)_completedPropFindTask:intermediateETag:intermediateScheduleTag:destinationFilename:;
- (id)sourceEntityScheduleTags;
- (void)setSourceEntityScheduleTags:;
- (BOOL)isAutoScheduleSupported;
- (void)setIsAutoScheduleSupported:;
- (id)destinationEntityScheduleTags;
- (void)setDestinationEntityScheduleTags:;
@end
