@interface DOCErrorStore : NSObject
+ (id)augmentedErrorForError:;
+ (id)_augmentedErrorForError:localizedDescription:recoverySuggestion:;
@end
