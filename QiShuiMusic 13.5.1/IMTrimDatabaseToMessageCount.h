@interface IMTrimDatabaseToMessageCount : IMAbstractDatabaseTrimmer
@property (nonatomic) q messageCount;
- (long long)messageCount;
- (void)performMessageSelectionWithOperation:;
- (id)initWithSourceDatabasePath:destinationDatabasePath:messageCount:;
@end
