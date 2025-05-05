@interface AVKeyPathDependency : NSObject
- (void)dealloc;
- (void)_reactToSecondLevelPropertyChange:;
- (id)initWithObject:thatHasPropertyWithKey:whoseValueDependsOnValueAtKeyPath:;
- (void)initializationIsCompleteForObject:;
- (id)description;
- (void)_startObservingSecondLevelPropertyOnNewCurrentValueForTopLevelDependencyProperty:;
- (void)_reactToTopLevelPropertyChange:;
@end
