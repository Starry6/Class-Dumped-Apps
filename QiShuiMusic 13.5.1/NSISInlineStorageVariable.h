@interface NSISInlineStorageVariable : NSISVariable
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger valueRestriction;
@property (nonatomic) BOOL shouldBeMinimized;
@property (nonatomic) BOOL valueIsUserObservable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dealloc;
- (void)setName:;
- (int)nsis_orientationHintForVariable:;
- (void)setShouldBeMinimized:;
- (id)markedConstraint;
- (BOOL)nsis_valueOfVariableIsUserObservable:;
- (id)initWithCoder:;
- (void)nsis_valueOfVariable:didChangeInEngine:;
- (BOOL)valueIsUserObservable;
- (void)encodeWithCoder:;
- (void)setValueRestriction:;
- (int)valueRestriction;
- (void)setValueIsUserObservable:;
- (id)name;
- (id)nsis_descriptionOfVariable:;
- (BOOL)shouldBeMinimized;
@end
