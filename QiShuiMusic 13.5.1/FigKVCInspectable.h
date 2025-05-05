@interface FigKVCInspectable : NSObject
- (id)valueForUndefinedKey:;
- (BOOL)validateValue:forKey:error:;
- (BOOL)validateValue:forKeyPath:error:;
@end
