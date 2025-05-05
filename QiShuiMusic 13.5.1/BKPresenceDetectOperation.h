@interface BKPresenceDetectOperation : BKOperation
@property (nonatomic) q priority;
- (void)setPriority:;
- (void)startBioOperation:reply:;
- (id)optionsDictionaryWithError:;
- (long long)priority;
@end
